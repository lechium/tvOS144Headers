/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalDAV/CalDAVScheduleTask.h>

@class NSString;

@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask {

	NSString* _maskedUID;

}

@property (nonatomic,retain) NSString * maskedUID;              //@synthesize maskedUID=_maskedUID - In the implementation block
+(id)_freeBusyDocumentWithOrganizer:(id)arg1 attendees:(id)arg2 start:(id)arg3 end:(id)arg4 maskedUID:(id)arg5 extendedFreeBusy:(BOOL)arg6 prodID:(id)arg7 ;
+(id)_icsDate:(id)arg1 calendar:(id)arg2 ;
-(id)initWithOrganizer:(id)arg1 originator:(id)arg2 attendees:(id)arg3 start:(id)arg4 end:(id)arg5 outboxURL:(id)arg6 maskedUID:(id)arg7 extendedFreeBusy:(BOOL)arg8 prodID:(id)arg9 ;
-(void)setMaskedUID:(NSString *)arg1 ;
-(id)initWithOrganizer:(id)arg1 originator:(id)arg2 attendees:(id)arg3 start:(id)arg4 end:(id)arg5 outboxURL:(id)arg6 maskedUID:(id)arg7 ;
-(NSString *)maskedUID;
@end

