/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SUICAudioPowerLevelLinearConverter : NSObject
+(float)_adjustedLinearPowerLevel:(float)arg1 isInput:(BOOL)arg2 ;
+(float)_linearValueForPowerLevel:(float)arg1 shouldAdjustForDeviceType:(BOOL)arg2 isInput:(BOOL)arg3 ;
+(float)_expectedLinearInputPowerLevelMaximum;
+(float)linearValueForInputPowerLevel:(float)arg1 ;
+(float)linearValueForOutputPowerLevel:(float)arg1 ;
@end

