/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable, NSMutableArray;

@interface MPMiddlewareOperationMap : NSObject {

	NSMapTable* _middlewareOperationMap;
	NSMutableArray* _middleware;
	NSMutableArray* _operations;

}
+(id)mapForRequest:(id)arg1 ;
-(id)_init;
-(id)operationsForMiddleware:(id)arg1 ;
-(id)allMiddleware;
-(id)allOperations;
@end

