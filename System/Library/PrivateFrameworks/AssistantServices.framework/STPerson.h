/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/STSiriModelObject.h>
#import <libobjc.A.dylib/AFTranscriptionType.h>

@class NSSet, NSString;

@interface STPerson : STSiriModelObject <AFTranscriptionType> {

	NSSet* _contactHandles;
	NSString* _fullName;

}

@property (nonatomic,copy) NSSet * contactHandles;                  //@synthesize contactHandles=_contactHandles - In the implementation block
@property (nonatomic,copy) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(NSSet *)contactHandles;
-(void)setContactHandles:(NSSet *)arg1 ;
@end

