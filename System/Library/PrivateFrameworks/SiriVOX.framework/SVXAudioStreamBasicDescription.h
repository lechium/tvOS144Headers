/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SVXAudioStreamBasicDescription : NSObject <NSCopying, NSSecureCoding> {

	unsigned _formatID;
	unsigned _formatFlags;
	unsigned _bytesPerPacket;
	unsigned _framesPerPacket;
	unsigned _bytesPerFrame;
	unsigned _channelsPerFrame;
	unsigned _bitsPerChannel;
	unsigned _reserved;
	double _sampleRate;

}

@property (nonatomic,readonly) double sampleRate;                      //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,readonly) unsigned formatID;                      //@synthesize formatID=_formatID - In the implementation block
@property (nonatomic,readonly) unsigned formatFlags;                   //@synthesize formatFlags=_formatFlags - In the implementation block
@property (nonatomic,readonly) unsigned bytesPerPacket;                //@synthesize bytesPerPacket=_bytesPerPacket - In the implementation block
@property (nonatomic,readonly) unsigned framesPerPacket;               //@synthesize framesPerPacket=_framesPerPacket - In the implementation block
@property (nonatomic,readonly) unsigned bytesPerFrame;                 //@synthesize bytesPerFrame=_bytesPerFrame - In the implementation block
@property (nonatomic,readonly) unsigned channelsPerFrame;              //@synthesize channelsPerFrame=_channelsPerFrame - In the implementation block
@property (nonatomic,readonly) unsigned bitsPerChannel;                //@synthesize bitsPerChannel=_bitsPerChannel - In the implementation block
@property (nonatomic,readonly) unsigned reserved;                      //@synthesize reserved=_reserved - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)reserved;
-(double)sampleRate;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(unsigned)bitsPerChannel;
-(unsigned)bytesPerFrame;
-(unsigned)bytesPerPacket;
-(unsigned)channelsPerFrame;
-(unsigned)formatFlags;
-(unsigned)formatID;
-(unsigned)framesPerPacket;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithSampleRate:(double)arg1 formatID:(unsigned)arg2 formatFlags:(unsigned)arg3 bytesPerPacket:(unsigned)arg4 framesPerPacket:(unsigned)arg5 bytesPerFrame:(unsigned)arg6 channelsPerFrame:(unsigned)arg7 bitsPerChannel:(unsigned)arg8 reserved:(unsigned)arg9 ;
@end

