/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMAP/IMAP-Structs.h>
#import <IMAP/MFIMAPOperation.h>

@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPOperation {

	CFArrayRef messageIds;
	CFArrayRef internalDates;

}
-(void)dealloc;
-(unsigned char)_magic;
-(unsigned)approximateSize;
-(id)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(void)serializeIntoData:(id)arg1 ;
-(void)expungeTemporaryUid:(unsigned)arg1 ;
-(BOOL)getMessageId:(id*)arg1 andInternalDate:(id*)arg2 forDestinationUid:(unsigned)arg3 ;
-(void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned)arg3 ;
@end
