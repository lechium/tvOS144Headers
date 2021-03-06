/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface HMDCameraAccessModeChangedBulletin : NSObject {

	NSString* _title;
	NSString* _body;
	NSString* _threadIdentifier;
	NSDate* _dateOfOccurrence;

}

@property (copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSString * body;                          //@synthesize body=_body - In the implementation block
@property (copy,readonly) NSString * threadIdentifier;              //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (copy,readonly) NSDate * dateOfOccurrence;                //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
+(id)bulletinForAccessMode:(unsigned long long)arg1 camera:(id)arg2 home:(id)arg3 changeReason:(unsigned long long)arg4 changeDate:(id)arg5 ;
+(id)localizedMessageForCameraAccessModeChange:(unsigned long long)arg1 changeReason:(unsigned long long)arg2 camera:(id)arg3 ;
-(NSString *)title;
-(NSString *)body;
-(NSString *)threadIdentifier;
-(NSDate *)dateOfOccurrence;
-(id)initWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3 dateOfOccurrence:(id)arg4 ;
@end

