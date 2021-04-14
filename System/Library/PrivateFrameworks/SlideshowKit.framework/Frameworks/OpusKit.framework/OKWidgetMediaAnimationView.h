/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSMutableArray, NSString;

@interface OKWidgetMediaAnimationView : OKWidgetView <OKSettingsSupport> {

	NSMutableArray* _CGImages;
	BOOL _autoplay;
	BOOL _loop;
	double _duration;
	NSString* _uuid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationKeyPrefix;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(void)stopAnimation;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(void)playAnimation;
-(id)settingObjectForKey:(id)arg1 ;
-(long long)settingContentMode;
-(void)setSettingContentMode:(long long)arg1 ;
-(void)setSettingUrls:(id)arg1 ;
-(BOOL)settingAutoplay;
-(void)setSettingAutoplay:(BOOL)arg1 ;
-(BOOL)settingLoop;
-(void)setSettingLoop:(BOOL)arg1 ;
-(double)settingDuration;
-(void)setSettingDuration:(double)arg1 ;
@end
