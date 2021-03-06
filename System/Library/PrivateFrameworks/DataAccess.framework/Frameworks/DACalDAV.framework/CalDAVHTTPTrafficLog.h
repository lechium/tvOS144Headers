/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject {

	DACoreDAVLogger* _curLogger;

}

@property (nonatomic,retain) DACoreDAVLogger * curLogger;              //@synthesize curLogger=_curLogger - In the implementation block
+(id)instance;
-(id)init;
-(BOOL)enabled;
-(void)logString:(id)arg1 ;
-(void)logData:(id)arg1 ;
-(void)setCurLogger:(DACoreDAVLogger *)arg1 ;
-(DACoreDAVLogger *)curLogger;
-(void)finishSnippets;
-(void)logStringWithFormat:(id)arg1 ;
@end

