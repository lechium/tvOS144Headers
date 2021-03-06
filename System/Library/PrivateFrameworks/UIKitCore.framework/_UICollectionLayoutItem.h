/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class NSArray, _UICollectionLayoutEdgeSpacing, NSString, _UICollectionLayoutSize;

@interface _UICollectionLayoutItem : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	NSArray* _supplementaryItems;
	NSArray* _decorationItems;
	_UICollectionLayoutEdgeSpacing* _edgeSpacing;
	NSString* _name;
	_UICollectionLayoutSize* _size;
	NSDirectionalEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) _UICollectionLayoutSize * size;                        //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentInsets;                   //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) _UICollectionLayoutEdgeSpacing * edgeSpacing;              //@synthesize edgeSpacing=_edgeSpacing - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
+(id)itemWithSize:(id)arg1 decorationItems:(id)arg2 ;
+(id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3 ;
+(id)itemWithSize:(id)arg1 ;
+(id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UICollectionLayoutSize *)size;
-(void)setName:(NSString *)arg1 ;
-(NSDirectionalEdgeInsets)contentInsets;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setEdgeSpacing:(_UICollectionLayoutEdgeSpacing *)arg1 ;
-(_UICollectionLayoutEdgeSpacing *)edgeSpacing;
-(id)_apiRepresentation;
-(id)initWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3 contentInsets:(NSDirectionalEdgeInsets)arg4 edgeSpacing:(id)arg5 name:(id)arg6 ;
@end

