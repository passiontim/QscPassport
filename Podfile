platform :ios, '8.0'
inhibit_all_warnings!
use_frameworks!
target ‘QscPassport’ do
pod 'AFNetworking'
pod 'SDWebImage','~> 3.7.3'
pod 'IQKeyboardManager'
pod 'ShareSDK3', '~> 3.6.3'
pod 'MOBFoundation', '~> 2.2.19'
pod 'ShareSDK3/ShareSDKPlatforms/SinaWeibo'
pod 'ShareSDK3/ShareSDKPlatforms/QQ'
pod 'ShareSDK3/ShareSDKPlatforms/WeChat'
pod 'Masonry', '~> 0.6.2'
end



post_install do |installer_representation|
installer_representation.pods_project.targets.each do |target|
target.build_configurations.each do |config|
config.build_settings['ARCHS'] = 'armv7 arm64'
end
end
end


