/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString;

@interface _CDSerializableKeyedData : NSObject {

	NSData* _encodedKey;
	unsigned char _keyChecksum;
	unsigned char _dataChecksum;
	BOOL _dataChecksumNeedsUpdate;
	NSString* _key;
	NSData* _data;

}
+(id)log;
+(id)errorForInvalidKeyEncoding;
+(unsigned char)byteChecksumOfData:(id)arg1 ;
+(id)dataDeseralizedFrom:(void*)arg1 maxSize:(unsigned long long)arg2 checksum:(char*)arg3 bytesRead:(unsigned long long*)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)serializeData:(id)arg1 withChecksum:(unsigned char)arg2 to:(void*)arg3 ;
@end

