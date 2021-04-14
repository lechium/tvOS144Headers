/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UINib;

@interface UICollectionViewSupplementaryRegistration : NSObject {

	NSString* _reuseIdentifier;
	Class _supplementaryClass;
	UINib* _supplementaryNib;
	NSString* _elementKind;
	/*^block*/id _configurationHandler;

}

@property (nonatomic,readonly) Class supplementaryClass;              //@synthesize supplementaryClass=_supplementaryClass - In the implementation block
@property (nonatomic,readonly) UINib * supplementaryNib;              //@synthesize supplementaryNib=_supplementaryNib - In the implementation block
@property (nonatomic,readonly) NSString * elementKind;                //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,readonly) id configurationHandler;               //@synthesize configurationHandler=_configurationHandler - In the implementation block
+(id)registrationWithSupplementaryClass:(Class)arg1 elementKind:(id)arg2 configurationHandler:(/*^block*/id)arg3 ;
+(id)registrationWithSupplementaryNib:(id)arg1 elementKind:(id)arg2 configurationHandler:(/*^block*/id)arg3 ;
-(id)reuseIdentifier;
-(id)configurationHandler;
-(NSString *)elementKind;
-(BOOL)hasSupplementaryClass;
-(BOOL)hasSupplementaryNib;
-(Class)supplementaryClass;
-(UINib *)supplementaryNib;
-(id)initWithSupplementaryClass:(Class)arg1 supplementaryNib:(id)arg2 elementKind:(id)arg3 configurationHandler:(/*^block*/id)arg4 reuseIdentifier:(id)arg5 ;
@end

