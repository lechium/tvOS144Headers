/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLSettingFeedbackMessage : CPLFeedbackMessage {

	NSString* _settingName;
	NSString* _value;

}

@property (nonatomic,readonly) NSString * settingName;              //@synthesize settingName=_settingName - In the implementation block
@property (nonatomic,readonly) NSString * value;                    //@synthesize value=_value - In the implementation block
+(id)feedbackType;
-(NSString *)value;
-(id)serverMessage;
-(id)initWithSetting:(id)arg1 value:(id)arg2 ;
-(NSString *)settingName;
@end

