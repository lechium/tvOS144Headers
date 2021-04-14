/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VCVideoRule;

@interface VCBitrateRule : NSObject {

	unsigned _bitrate;
	int _connectionType;
	VCVideoRule* limitingRule;

}

@property (assign) unsigned bitrate;                                    //@synthesize bitrate=_bitrate - In the implementation block
@property (assign) int connectionType;                                  //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) VCVideoRule * limitingRule; 
-(id)description;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(void)setConnectionType:(int)arg1 ;
-(int)connectionType;
-(unsigned)bitrate;
-(void)setBitrate:(unsigned)arg1 ;
-(VCVideoRule *)limitingRule;
-(id)initWithBitrate:(unsigned)arg1 connectionType:(int)arg2 limitingRule:(id)arg3 ;
@end

