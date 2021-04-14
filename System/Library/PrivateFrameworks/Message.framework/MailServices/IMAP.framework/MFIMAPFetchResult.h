/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MFIMAPFetchResult : NSObject {

	int _itemType;
	unsigned long long _modSequenceNumber;
	SCD_Union_MF7 _typeSpecific;

}
-(id)description;
-(void)dealloc;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(unsigned)encoding;
-(id)fetchData;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(unsigned long long)messageSize;
-(id)section;
-(void)setSection:(id)arg1 ;
-(void)setStartOffset:(unsigned long long)arg1 ;
-(unsigned long long)startOffset;
-(void)setUid:(unsigned)arg1 ;
-(unsigned)uid;
-(unsigned long long)messageFlags;
-(void)setMessageFlags:(unsigned long long)arg1 ;
-(unsigned long long)uniqueRemoteId;
-(void)setUniqueRemoteId:(unsigned long long)arg1 ;
-(unsigned long long)modSequenceNumber;
-(void)setModSequenceNumber:(unsigned long long)arg1 ;
-(void)setFlagsArray:(id)arg1 ;
-(id)flagsArray;
-(id)envelope;
-(id)bodyStructure;
-(void)setEnvelope:(id)arg1 ;
-(id)internalDate;
-(void)setInternalDate:(id)arg1 ;
-(void)setFetchData:(id)arg1 ;
-(void)setBodyStructure:(id)arg1 ;
-(void)setCustomFlagsArray:(id)arg1 ;
-(id)customFlagsArray;
@end
