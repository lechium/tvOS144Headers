/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MROrigin, MRClient, MRPlayer, _MRNowPlayingPlayerPathProtobuf, NSData;

@interface MRPlayerPath : NSObject <NSCopying, NSSecureCoding> {

	MROrigin* _origin;
	MRClient* _client;
	MRPlayer* _player;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * protobuf; 
@property (nonatomic,readonly) MRPlayerPath * localResolvedPlayerPath; 
@property (nonatomic,copy) MROrigin * origin;                                                            //@synthesize origin=_origin - In the implementation block
@property (nonatomic,copy) MRClient * client;                                                            //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) MRPlayer * player;                                                            //@synthesize player=_player - In the implementation block
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (nonatomic,readonly) MRPlayerPath * skeleton; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (getter=isResolved,nonatomic,readonly) BOOL resolved; 
@property (getter=isSystemMediaApplication,nonatomic,readonly) BOOL systemMediaApplication; 
+(BOOL)supportsSecureCoding;
+(id)localPlayerPath;
+(id)localResolvedPlayerPathFromPlayerPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MRClient *)client;
-(void)setClient:(MRClient *)arg1 ;
-(BOOL)isResolved;
-(BOOL)isLocal;
-(MRPlayer *)player;
-(void)setPlayer:(MRPlayer *)arg1 ;
-(MROrigin *)origin;
-(void)setOrigin:(MROrigin *)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithOrigin:(id)arg1 client:(id)arg2 player:(id)arg3 ;
-(MRPlayerPath *)skeleton;
-(id)playerPathByRedirectingToOrigin:(id)arg1 ;
-(MRPlayerPath *)localResolvedPlayerPath;
-(BOOL)isSystemMediaApplication;
@end

