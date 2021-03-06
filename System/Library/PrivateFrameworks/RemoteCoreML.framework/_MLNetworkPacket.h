/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableData;

@interface _MLNetworkPacket : NSObject {

	NSMutableData* _buffer;
	NSMutableData* _doubleBuffer;
	unsigned long long _sizeOfPacket;
	unsigned long long _command;

}

@property (nonatomic,retain) NSMutableData * buffer;                       //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,retain) NSMutableData * doubleBuffer;                 //@synthesize doubleBuffer=_doubleBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long sizeOfPacket;              //@synthesize sizeOfPacket=_sizeOfPacket - In the implementation block
@property (assign,nonatomic) unsigned long long command;                   //@synthesize command=_command - In the implementation block
-(id)init;
-(void)reset;
-(NSMutableData *)buffer;
-(void)setCommand:(unsigned long long)arg1 ;
-(unsigned long long)command;
-(void)setBuffer:(NSMutableData *)arg1 ;
-(void)resetMetadata;
-(unsigned long long)sizeOfPacket;
-(void)setSizeOfPacket:(unsigned long long)arg1 ;
-(void)cleanupDoubleBuffer;
-(void)setDoubleBuffer:(NSMutableData *)arg1 ;
-(void)resetDoubleBuffer;
-(NSMutableData *)doubleBuffer;
@end

