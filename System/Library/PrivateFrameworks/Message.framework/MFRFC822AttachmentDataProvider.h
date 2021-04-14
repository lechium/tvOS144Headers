/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFAttachmentDataProviderProtocol.h>

@class NSData, MFMimePart, MFMailMessage, NSString;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {

	NSData* _messageData;
	MFMimePart* _parentPart;
	MFMailMessage* _message;

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
-(id)initWithMessageData:(id)arg1 parentPart:(id)arg2 ;
@end

