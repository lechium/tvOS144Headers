/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {

	MPAVRouteConnection* _connection;
	void* _television;

}

@property (nonatomic,readonly) void* television;              //@synthesize television=_television - In the implementation block
-(void)dealloc;
-(id)connection;
-(long long)routeType;
-(id)routeUID;
-(long long)routeSubtype;
-(id)initWithTelevision:(void*)arg1 ;
-(void*)television;
@end

