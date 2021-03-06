/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _SWCSubstitutionVariableList : NSObject <SWCRedactedDescription, NSSecureCoding> {

	SWCSubstitutionVariable _variables[0];

}

@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)substitutionVariableListWithDictionary:(id)arg1 ;
+(id)cheapBuiltInSubstitutionVariableList;
+(id)expensiveBuiltInSubstitutionVariableList;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)description;
-(unsigned long long)count;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionDebug:(BOOL)arg1 redacted:(BOOL)arg2 ;
-(void)enumerateSubstitutionVariablesWithBlock:(/*^block*/id)arg1 ;
@end

