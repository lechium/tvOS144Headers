/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccess/DAMailboxRequest.h>

@class DAMailMessage;

@interface DADraftMessageRequest : DAMailboxRequest {

	BOOL _send;
	DAMailMessage* _message;

}

@property (nonatomic,retain) DAMailMessage * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL send;                            //@synthesize send=_send - In the implementation block
-(id)description;
-(DAMailMessage *)message;
-(void)setMessage:(DAMailMessage *)arg1 ;
-(BOOL)send;
-(void)setSend:(BOOL)arg1 ;
-(id)initWithRequestType:(int)arg1 message:(id)arg2 send:(BOOL)arg3 ;
@end

