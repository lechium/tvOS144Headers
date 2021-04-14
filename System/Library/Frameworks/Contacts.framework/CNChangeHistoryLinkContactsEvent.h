/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

@interface CNChangeHistoryLinkContactsEvent : CNChangeHistoryEvent {

	CNContact* _fromContact;
	CNContact* _toContact;

}

@property (nonatomic,readonly) CNContact * fromContact;              //@synthesize fromContact=_fromContact - In the implementation block
@property (nonatomic,readonly) CNContact * toContact;                //@synthesize toContact=_toContact - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)instanceSortOrder;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithFromContact:(id)arg1 toContact:(id)arg2 ;
-(CNContact *)fromContact;
-(CNContact *)toContact;
@end

