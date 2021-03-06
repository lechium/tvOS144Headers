/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFPublicKey.h>

@class _SFECKeySpecifier;

@interface _SFECPublicKey : _SFPublicKey {

	id _ecPublicKeyInternal;

}

@property (nonatomic,copy,readonly) _SFECKeySpecifier * keySpecifier; 
+(id)_specifierForSecKey:(_SecKey*)arg1 ;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg1 ;
+(id)keyWithSubjectPublicKeyInfo:(id)arg1 ;
-(id)performWithCCKey:(/*^block*/id)arg1 ;
-(id)encodeSubjectPublicKeyInfo;
@end

