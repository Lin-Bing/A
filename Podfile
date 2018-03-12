# Uncomment this line to define a global platform for your project
# platform :ios, '9.0'

# 私有库spec
source 'https://github.com/Lin-Bing/LBSpecs.git' 
# github第三方库spec
source 'https://github.com/CocoaPods/Specs.git'

target 'A' do

# Private Pods
pod "B_Category", :path => "../B_Category" # 本地引用B_Category,B_Category依赖CTMediator，pod install时会自动导入
 
 
 # Public Pods
 pod 'HandyFrame'
 
end
