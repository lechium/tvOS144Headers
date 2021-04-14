/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HAPFragmentationPacket : HMFObject {

	unsigned short _transactionIdentifier;
	unsigned _length;
	unsigned _offset;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned short transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned length;                                   //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) unsigned offset;                                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                                //@synthesize data=_data - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)description;
-(id)init;
-(unsigned)length;
-(NSData *)data;
-(unsigned)offset;
-(id)shortDescription;
-(id)serialize;
-(unsigned short)transactionIdentifier;
-(id)initWithFragmentedPacketData:(id)arg1 ;
-(id)initWithData:(id)arg1 transactionIdentifier:(unsigned short)arg2 length:(unsigned)arg3 offset:(unsigned)arg4 ;
@end

