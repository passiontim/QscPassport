
Pod::Spec.new do |s|

# LJ 源码说明
s.name         = "QscPassport"
s.version      = "1.0.1"
s.summary      = "QscPassport for iOS"
s.description  = <<-DESC
It is a component for ios photo browser,written by Objective-C.
DESC

# LJ 默认主页链接
s.homepage     = "https://github.com/sunlijun/QscPassport"

# LJ 默认MIT
#s.license  ='MIT'
s.license  ={ :type => "MIT", :file => "LICENSE" }

# LJ 所有者权限
s.author             = { "sunlijun" => "15810755796@163.com" }

# LJ 支持平台 版本
s.platform     = :ios, "8.0"

# 源代码GIT目录 use https
s.source       = { :git => "https://github.com/sunlijun/QscPassport.git", :tag => s.version }

# LJ 配置源文件  passport / *  所有文件 Exclude 排除文件
#s.source_files  = "QscPassport", "QscPassport/*"
#s.source_files = 'QscPassport/**/*.{h,m}','Pods/**/*.{h,m}'
#s.source_files = 'Passport/*'
s.source_files  = 'Demo/*.{h,m}'

#  LJ 依赖库
#s.vendored_frameworks = 'PassPortSDK.framework'


# LJ 自动内存机制
s.requires_arc = true

# LJ依赖三方库 案例 s.dependency "JSONKit", "~> 1.4"


end

