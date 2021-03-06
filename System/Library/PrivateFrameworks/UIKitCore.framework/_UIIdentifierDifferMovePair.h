/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIIdentifierDifferMovePair.h>

@protocol _UIIdentifierDifferMovePair <NSObject>
@property (nonatomic,readonly) long long fromIndex; 
@property (nonatomic,readonly) long long toIndex; 
@required
-(long long)toIndex;
-(long long)fromIndex;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIIdentifierDifferMovePair : NSObject <_UIIdentifierDifferMovePair, NSCopying> {

	long long _fromIndex;
	long long _toIndex;

}

@property (assign,nonatomic) long long fromIndex;                   //@synthesize fromIndex=_fromIndex - In the implementation block
@property (assign,nonatomic) long long toIndex;                     //@synthesize toIndex=_toIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(long long)toIndex;
-(void)setToIndex:(long long)arg1 ;
-(long long)fromIndex;
-(id)initWithFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)setFromIndex:(long long)arg1 ;
@end

