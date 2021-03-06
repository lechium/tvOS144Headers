/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MFOfflineTransferFailureSnapshot : NSObject <NSCoding> {

	NSString* _originalRemoteID;
	NSString* _originalMailboxID;
	unsigned long long _originalMessageFlags;

}

@property (nonatomic,readonly) NSString * originalRemoteID;                          //@synthesize originalRemoteID=_originalRemoteID - In the implementation block
@property (nonatomic,readonly) NSString * originalMailboxID;                         //@synthesize originalMailboxID=_originalMailboxID - In the implementation block
@property (nonatomic,readonly) unsigned long long originalMessageFlags;              //@synthesize originalMessageFlags=_originalMessageFlags - In the implementation block
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)originalMailboxID;
-(NSString *)originalRemoteID;
-(id)initWithOriginalRemoteID:(id)arg1 mailboxID:(id)arg2 messageFlags:(unsigned long long)arg3 ;
-(unsigned long long)originalMessageFlags;
@end

