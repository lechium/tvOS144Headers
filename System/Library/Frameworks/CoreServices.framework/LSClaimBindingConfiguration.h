/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface LSClaimBindingConfiguration : NSObject {

	BOOL _addClaimRecordIfMissing;
	NSString* _typeIdentifier;
	unsigned long long _bundleClassMask;

}

@property (readonly) NSString * typeIdentifier;                     //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (assign) unsigned long long bundleClassMask;              //@synthesize bundleClassMask=_bundleClassMask - In the implementation block
@property (assign) BOOL addClaimRecordIfMissing;                    //@synthesize addClaimRecordIfMissing=_addClaimRecordIfMissing - In the implementation block
-(NSString *)typeIdentifier;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(unsigned long long)bundleClassMask;
-(void)setBundleClassMask:(unsigned long long)arg1 ;
-(BOOL)addClaimRecordIfMissing;
-(void)setAddClaimRecordIfMissing:(BOOL)arg1 ;
@end

