/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UICollectionLayoutAuxillaryKey : NSObject <NSCopying> {

	BOOL _isSupplementary;
	NSString* _elementKind;
	long long _index;
	long long _auxillaryKind;

}

@property (nonatomic,readonly) NSString * elementKind;               //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,readonly) long long index;                      //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long auxillaryKind;              //@synthesize auxillaryKind=_auxillaryKind - In the implementation block
@property (nonatomic,readonly) BOOL isSupplementary;                 //@synthesize isSupplementary=_isSupplementary - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)index;
-(NSString *)elementKind;
-(BOOL)isSupplementary;
-(long long)auxillaryKind;
-(id)initWithElementKind:(id)arg1 index:(long long)arg2 auxillaryKind:(long long)arg3 isSupplementary:(BOOL)arg4 ;
@end

