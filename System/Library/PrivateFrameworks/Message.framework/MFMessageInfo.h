/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MFMessageInfo : NSObject <MFBaseMessage, NSCopying> {

	unsigned _flagged : 1;
	unsigned _read : 1;
	unsigned _deleted : 1;
	unsigned _uidIsLibraryID : 1;
	unsigned _hasAttachments : 1;
	unsigned _isVIP : 1;
	unsigned _isHighPriority : 1;
	unsigned _dateSentInterval;
	unsigned _mailboxID;
	unsigned _uid;
	unsigned _dateReceivedInterval;
	unsigned _sortUid;
	unsigned _sortDateReceivedInterval;
	long long _conversationHash;
	long long _generationNumber;
	long long _messageIDHash;

}

@property (nonatomic,readonly) unsigned uid; 
@property (nonatomic,readonly) unsigned dateReceivedInterval; 
@property (nonatomic,readonly) unsigned dateSentInterval; 
@property (nonatomic,readonly) long long conversationHash; 
@property (nonatomic,readonly) unsigned mailboxID; 
@property (nonatomic,readonly) long long messageIDHash; 
@property (nonatomic,readonly) BOOL flagged; 
@property (nonatomic,readonly) BOOL read; 
@property (nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL senderVIP; 
@property (getter=isKnownToHaveAttachments,nonatomic,readonly) BOOL knownToHaveAttachments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long generationNumber;                                               //@synthesize generationNumber=_generationNumber - In the implementation block
@property (assign,nonatomic) unsigned uid;                                                               //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) unsigned dateReceivedInterval;                                              //@synthesize dateReceivedInterval=_dateReceivedInterval - In the implementation block
@property (assign,nonatomic) unsigned dateSentInterval;                                                  //@synthesize dateSentInterval=_dateSentInterval - In the implementation block
@property (assign,nonatomic) long long conversationHash;                                                 //@synthesize conversationHash=_conversationHash - In the implementation block
@property (assign,nonatomic) unsigned mailboxID;                                                         //@synthesize mailboxID=_mailboxID - In the implementation block
@property (assign,nonatomic) long long messageIDHash;                                                    //@synthesize messageIDHash=_messageIDHash - In the implementation block
@property (assign,nonatomic) BOOL flagged; 
@property (assign,nonatomic) BOOL read; 
@property (assign,nonatomic) BOOL deleted; 
@property (assign,nonatomic) BOOL uidIsLibraryID; 
@property (assign,nonatomic) BOOL isVIP; 
@property (assign,getter=isKnownToHaveAttachments,nonatomic) BOOL knownToHaveAttachments; 
@property (assign,nonatomic) unsigned sortUid;                                                           //@synthesize sortUid=_sortUid - In the implementation block
@property (assign,nonatomic) unsigned sortDateReceivedInterval;                                          //@synthesize sortDateReceivedInterval=_sortDateReceivedInterval - In the implementation block
+(long long)newGenerationNumber;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)setDeleted:(BOOL)arg1 ;
-(BOOL)deleted;
-(void)setUid:(unsigned)arg1 ;
-(unsigned)uid;
-(BOOL)read;
-(void)setRead:(BOOL)arg1 ;
-(BOOL)isVIP;
-(long long)messageIDHash;
-(void)setMessageIDHash:(long long)arg1 ;
-(long long)generationNumber;
-(long long)generationCompare:(id)arg1 ;
-(unsigned)mailboxID;
-(BOOL)flagged;
-(void)setMailboxID:(unsigned)arg1 ;
-(unsigned)dateSentInterval;
-(void)setDateSentInterval:(unsigned)arg1 ;
-(BOOL)senderVIP;
-(id)copyMessageInfo;
-(unsigned)dateReceivedInterval;
-(long long)conversationHash;
-(BOOL)isKnownToHaveAttachments;
-(void)setUidIsLibraryID:(BOOL)arg1 ;
-(unsigned)sortUid;
-(void)setSortUid:(unsigned)arg1 ;
-(unsigned)sortDateReceivedInterval;
-(void)setSortDateReceivedInterval:(unsigned)arg1 ;
-(id)initWithUid:(unsigned)arg1 mailboxID:(unsigned)arg2 messageID:(long long)arg3 dateReceivedInterval:(unsigned)arg4 dateSentInterval:(unsigned)arg5 conversationHash:(long long)arg6 read:(BOOL)arg7 knownToHaveAttachments:(BOOL)arg8 flagged:(BOOL)arg9 isVIP:(BOOL)arg10 ;
-(void)setConversationHash:(long long)arg1 ;
-(void)setDateReceivedInterval:(unsigned)arg1 ;
-(void)setIsVIP:(BOOL)arg1 ;
-(void)setFlagged:(BOOL)arg1 ;
-(void)setKnownToHaveAttachments:(BOOL)arg1 ;
-(BOOL)uidIsLibraryID;
@end

