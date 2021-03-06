/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, VCPProtoTime;

@interface VCPProtoMovieSceneprintResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	NSData* _sceneprintBlob;
	VCPProtoTime* _timestamp;

}

@property (nonatomic,retain) VCPProtoTime * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSData * sceneprintBlob;               //@synthesize sceneprintBlob=_sceneprintBlob - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(VCPProtoTime *)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(VCPProtoTime *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSceneprintBlob:(NSData *)arg1 ;
-(NSData *)sceneprintBlob;
-(id)exportToLegacyDictionary;
@end

