/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFAttachmentDataProviderProtocol.h>

@class NSMutableDictionary, NSCache, NSString;

@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {

	NSMutableDictionary* _attachmentsData;
	NSCache* _attachmentsPlaceholderData;
	NSMutableDictionary* _attachmentsPasteboardData;
	NSMutableDictionary* _attachmentsUndoData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)messageForAttachment:(id)arg1 ;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2 ;
-(void)addData:(id)arg1 forContentID:(id)arg2 ;
-(id)dataForContentID:(id)arg1 ;
-(id)rawDataForContentID:(id)arg1 ;
-(id)_dataForAttachment:(id)arg1 ;
-(id)initWithData:(id)arg1 forContentID:(id)arg2 ;
-(void)removeDataForAttachment:(id)arg1 ;
-(void)recordPasteboardDataForAttachments:(id)arg1 ;
-(void)recordUndoDataForAttachments:(id)arg1 ;
@end
