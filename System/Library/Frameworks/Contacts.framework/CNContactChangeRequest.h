/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CNContactChangeRequest : NSObject <NSSecureCoding> {

	NSArray* _contacts;
	long long _kind;
	NSString* _linkIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * contacts;                        //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contactIdentifiers; 
@property (nonatomic,readonly) long long kind;                                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkIdentifier;                 //@synthesize linkIdentifier=_linkIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactChangeRequestWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)kind;
-(NSArray *)contactIdentifiers;
-(NSArray *)contacts;
-(NSString *)linkIdentifier;
-(id)initWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3 ;
@end
