/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol _CNContactHandleStringEquivalenceStrategy;
@class NSString;

@interface CNContactHandleIndexableString : NSObject <NSCopying, NSSecureCoding> {

	NSString* _indexKey;
	NSString* _stringValue;
	id<_CNContactHandleStringEquivalenceStrategy> _equivalenceStrategy;

}

@property (nonatomic,copy,readonly) NSString * stringValue;                                                    //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) id<_CNContactHandleStringEquivalenceStrategy> equivalenceStrategy;              //@synthesize equivalenceStrategy=_equivalenceStrategy - In the implementation block
@property (nonatomic,copy,readonly) NSString * indexKey;                                                       //@synthesize indexKey=_indexKey - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)emailIndexKey:(id)arg1 ;
+(id)phoneNumberIndexKey:(id)arg1 ;
+(id)equivalenceStrategyWithString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 ;
-(NSString *)indexKey;
-(BOOL)isEquivalentToString:(id)arg1 strict:(BOOL*)arg2 ;
-(id)initWithFullString:(id)arg1 indexKey:(id)arg2 equivalenceStrategy:(id)arg3 ;
-(id<_CNContactHandleStringEquivalenceStrategy>)equivalenceStrategy;
@end

