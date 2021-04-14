/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString, NSSet;

@interface PKCarUnlockSupportedTerminal : NSObject {

	NSArray* _associatedApplicationIdentifiers;
	NSString* _partnerIdentifier;
	NSString* _partnerName;
	NSSet* _terminalCriteria;

}

@property (nonatomic,copy,readonly) NSArray * associatedApplicationIdentifiers;              //@synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * partnerIdentifier;                            //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * partnerName;                                  //@synthesize partnerName=_partnerName - In the implementation block
@property (nonatomic,copy,readonly) NSSet * terminalCriteria;                                //@synthesize terminalCriteria=_terminalCriteria - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)partnerIdentifier;
-(NSString *)partnerName;
-(NSArray *)associatedApplicationIdentifiers;
-(NSSet *)terminalCriteria;
@end

