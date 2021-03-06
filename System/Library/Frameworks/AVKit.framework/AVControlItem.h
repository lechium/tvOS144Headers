/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <UIKit/UIAccessibilityIdentification.h>

@class NSString, UIImage, UIColor;

@interface AVControlItem : NSObject <NSSecureCoding, UIAccessibilityIdentification> {

	UIImage* _image;
	BOOL _enabled;
	BOOL __private;
	NSString* _accessibilityIdentifier;
	/*^block*/id _action;
	UIColor* _tintColor;
	/*^block*/id _actionBlock;
	NSString* _title;

}

@property (getter=_isSpacer,nonatomic,readonly) BOOL spacer; 
@property (nonatomic,readonly) double width; 
@property (assign,setter=_setPrivate:,getter=_isPrivate,nonatomic) BOOL _private; 
@property (setter=_setPrivateImage:,getter=_privateImage,nonatomic,retain) UIImage * _privateImage; 
@property (nonatomic,copy) id actionBlock;                                                                       //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                     //@synthesize title=_title - In the implementation block
@property (assign,setter=_setPrivate:,getter=_isPrivate,nonatomic) BOOL _private;                                //@synthesize _private=__private - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) id action;                                                                            //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                                //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * accessibilityIdentifier;                                                   //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)controlItemWithImage:(id)arg1 action:(/*^block*/id)arg2 ;
+(id)_cancelPiPControlItem;
+(id)_stopPiPControlItem;
+(id)_startPiPControlItem;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(double)width;
-(id)action;
-(void)setAction:(id)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)accessibilityIdentifier;
-(BOOL)_isPrivate;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(void)setActionBlock:(id)arg1 ;
-(void)_blockAction:(id)arg1 ;
-(UIImage *)_privateImage;
-(void)_setPrivateImage:(id)arg1 ;
-(void)__pipDummy:(id)arg1 ;
-(id)actionBlock;
-(void)_setPrivate:(BOOL)arg1 ;
-(BOOL)_isSpacer;
-(void)_sendAction;
@end

