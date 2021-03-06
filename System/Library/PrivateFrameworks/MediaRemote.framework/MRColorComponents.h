/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRColorProtobuf;

@interface MRColorComponents : NSObject <NSCopying> {

	float _red;
	float _green;
	float _blue;
	float _alpha;

}

@property (nonatomic,readonly) _MRColorProtobuf * protobuf; 
@property (assign,nonatomic) float red;                                  //@synthesize red=_red - In the implementation block
@property (assign,nonatomic) float green;                                //@synthesize green=_green - In the implementation block
@property (assign,nonatomic) float blue;                                 //@synthesize blue=_blue - In the implementation block
@property (assign,nonatomic) float alpha;                                //@synthesize alpha=_alpha - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(float)red;
-(float)green;
-(float)blue;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(void)setBlue:(float)arg1 ;
-(void)setGreen:(float)arg1 ;
-(void)setRed:(float)arg1 ;
-(_MRColorProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
@end

