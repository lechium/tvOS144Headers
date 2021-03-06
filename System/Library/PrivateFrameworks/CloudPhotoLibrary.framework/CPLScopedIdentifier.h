/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CPLScopedIdentifier : NSObject <NSCopying, NSSecureCoding> {

	long long _scopeIndex;
	NSString* _scopeIdentifier;
	NSString* _identifier;

}

@property (assign,nonatomic) long long scopeIndex; 
@property (copy,readonly) NSString * scopeIdentifier;              //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
@property (copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptionWithScopeIdentifier:(id)arg1 identifier:(id)arg2 ;
+(id)scopedIdentifiersFromArrayOfUnknownIdentifiers:(id)arg1 ;
+(id)scopedIdentifiersFromSetOfUnknownIdentifiers:(id)arg1 ;
+(id)scopedIdentifiersFromDictionaryOfUnknownIdentifiers:(id)arg1 ;
+(id)unscopedIdentifiersFromArrayOfScopedIdentifiers:(id)arg1 ;
+(id)unscopedIdentifiersFromSetOfScopedIdentifiers:(id)arg1 ;
+(id)unscopedIdentifiersFromDictionaryOfScopedIdentifiers:(id)arg1 ;
+(id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(BOOL)arg2 ;
+(id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(BOOL)arg2 defaultScopeIdentifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)safeFilename;
-(NSString *)scopeIdentifier;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(BOOL)cplSpecialIsEqual:(id)arg1 ;
-(unsigned long long)cplSpecialHash;
-(BOOL)isInMainScope;
-(long long)scopeIndex;
-(void)setScopeIndex:(long long)arg1 ;
-(id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2 ;
-(id)initRelativeToScopedIdentifier:(id)arg1 identifier:(id)arg2 ;
-(id)initInMainScopeWithIdentifier:(id)arg1 ;
-(id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2 scopeIndex:(long long)arg3 ;
-(id)descriptionWithNoScopeIndex;
@end

