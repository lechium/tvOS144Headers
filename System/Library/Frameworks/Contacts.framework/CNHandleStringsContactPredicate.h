/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNPredicate.h>

@class NSArray;

@interface CNHandleStringsContactPredicate : CNPredicate {

	NSArray* _handleStrings;
	NSArray* _containerIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * handleStrings;                     //@synthesize handleStrings=_handleStrings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * containerIdentifiers;              //@synthesize containerIdentifiers=_containerIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDebugDescription;
-(/*^block*/id)cn_resultTransformWithMatchInfos:(id)arg1 ;
-(NSArray *)containerIdentifiers;
-(id)initWithHandleStrings:(id)arg1 containerIdentifiers:(id)arg2 ;
-(id)initWithHandleStrings:(id)arg1 ;
-(NSArray *)handleStrings;
@end

