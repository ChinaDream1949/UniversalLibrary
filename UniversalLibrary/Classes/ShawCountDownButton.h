//
//  ShawCountDownButton.h
//  UniversalLibrary
//
//  Created by yuduobao on 2023/9/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ShawCountDownButtonType) {
    ShawCountDownButtonTypeNormal,            ///< 无背景，无边框
    ShawCountDownButtonTypeOnlyLine,          ///< 无背景，有边框
    ShawCountDownButtonTypeOnlyBackground,    ///< 有背景，无边框
};

@interface ShawCountDownButton : UIButton
/// 样式，默认ShawCountDownButtonTypeNormal
@property (nonatomic, assign) IBInspectable NSInteger tmdType ;
/// 是否可用，默认YES
@property (nonatomic, assign) IBInspectable BOOL tmdEnabled ;
/// 正常标题，默认“获取验证码”
@property (nonatomic, copy) IBInspectable NSString *normalTitle ;
/// 重新获取标题，默认“获取验证码”
@property (nonatomic, copy) IBInspectable NSString *againTitle ;
/// 发送中标题格式，默认“%ds 后获取”
@property (nonatomic, copy) IBInspectable NSString *sendingTitleFormat ;
/// 高亮颜色，默认0x4181FE
@property (nonatomic, strong) IBInspectable UIColor *highlightedColor ;
/// 非高亮颜色，默认0xd2d2d2
@property (nonatomic, strong) IBInspectable UIColor *disabledColor ;
/// 圆角半径，默认4
@property (nonatomic, assign) IBInspectable CGFloat cornerRadius ;
/// 边框宽度，默认0.5
@property (nonatomic, assign) IBInspectable CGFloat borderWidth ;
/// 倒计时长，默认60s
@property (nonatomic, assign) IBInspectable NSInteger countDownSize ;
/// 点击后是否自动倒计时（如果为NO，需要自己调用startCountDown触发倒计时），默认YES
@property (nonatomic, assign) IBInspectable BOOL autoCountDown ;

/// 点击回调
@property (nonatomic, strong) void(^startBlock)(void);
/// 重置
- (void)reset;
/// 开始倒计时
- (void)startCountDown;
@end

NS_ASSUME_NONNULL_END
