/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSUUID;

@interface _UICollectionLayoutSupplementaryEnrollment : NSObject {

	NSString* _kind;
	NSUUID* _enrollmentIdentifier;

}

@property (nonatomic,readonly) NSString * kind;                            //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSUUID * enrollmentIdentifier;              //@synthesize enrollmentIdentifier=_enrollmentIdentifier - In the implementation block
-(id)description;
-(NSString *)kind;
-(id)initWithKind:(id)arg1 ;
-(NSUUID *)enrollmentIdentifier;
@end
