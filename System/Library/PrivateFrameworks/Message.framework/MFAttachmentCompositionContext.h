/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, NSArray;

@interface MFAttachmentCompositionContext : NSObject {

	NSString* _contextID;
	NSURL* _attachmentsBaseURL;

}

@property (nonatomic,readonly) NSString * contextID;                //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,copy) NSURL * attachmentsBaseURL;              //@synthesize attachmentsBaseURL=_attachmentsBaseURL - In the implementation block
@property (nonatomic,readonly) NSArray * attachments; 
-(id)init;
-(void)dealloc;
-(NSArray *)attachments;
-(NSString *)contextID;
-(NSURL *)attachmentsBaseURL;
-(id)initWithContextID:(id)arg1 ;
-(void)setAttachmentsBaseURL:(NSURL *)arg1 ;
@end

