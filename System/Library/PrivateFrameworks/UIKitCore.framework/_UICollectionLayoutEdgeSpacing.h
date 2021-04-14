/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class _UICollectionLayoutSpacing;

@interface _UICollectionLayoutEdgeSpacing : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	_UICollectionLayoutSpacing* _leading;
	_UICollectionLayoutSpacing* _top;
	_UICollectionLayoutSpacing* _trailing;
	_UICollectionLayoutSpacing* _bottom;

}

@property (nonatomic,readonly) _UICollectionLayoutSpacing * leading; 
@property (nonatomic,readonly) _UICollectionLayoutSpacing * top; 
@property (nonatomic,readonly) _UICollectionLayoutSpacing * trailing; 
@property (nonatomic,readonly) _UICollectionLayoutSpacing * bottom; 
+(id)fixedSpacing:(double)arg1 ;
+(id)flexibleSpacing:(double)arg1 ;
+(id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
+(id)defaultSpacing;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UICollectionLayoutSpacing *)top;
-(_UICollectionLayoutSpacing *)bottom;
-(_UICollectionLayoutSpacing *)leading;
-(_UICollectionLayoutSpacing *)trailing;
-(id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
-(id)_apiRepresentation;
@end
