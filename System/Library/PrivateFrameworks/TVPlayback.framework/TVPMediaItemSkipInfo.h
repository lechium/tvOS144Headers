/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TVPMediaItemSkipInfo : NSObject {

	unsigned long long _type;
	double _start;
	double _duration;
	double _target;
	NSString* _localizedTitle;
	NSString* _skipIntroReportingType;

}

@property (nonatomic,readonly) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double start;                                        //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double target;                                       //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                      //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * skipIntroReportingType;              //@synthesize skipIntroReportingType=_skipIntroReportingType - In the implementation block
-(id)description;
-(unsigned long long)type;
-(double)target;
-(double)start;
-(double)duration;
-(NSString *)localizedTitle;
-(id)_typeDescription;
-(id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4 localizedTitle:(id)arg5 skipIntroReportingType:(id)arg6 ;
-(NSString *)skipIntroReportingType;
@end
