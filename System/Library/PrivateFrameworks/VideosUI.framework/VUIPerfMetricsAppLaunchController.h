/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface VUIPerfMetricsAppLaunchController : NSObject {

	NSDictionary* _appLaunchData;

}

@property (nonatomic,copy) NSDictionary * appLaunchData;              //@synthesize appLaunchData=_appLaunchData - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)_setAppLaunchFieldWithData:(id)arg1 ;
-(NSDictionary *)appLaunchData;
-(void)setAppLaunchData:(NSDictionary *)arg1 ;
-(void)recordAppLaunchEventWithEventType:(id)arg1 ;
@end

