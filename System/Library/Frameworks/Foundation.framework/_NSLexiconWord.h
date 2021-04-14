/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@class NSString, NSArray;

@interface _NSLexiconWord : NSObject {

	NSString* _token;
	NSArray* _parts;
	SCD_Struct_NS30 _attributes;

}

@property (nonatomic,readonly) SCD_Struct_NS30 attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) NSString * token;                   //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parts;                    //@synthesize parts=_parts - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)token;
-(SCD_Struct_NS30)attributes;
-(NSArray *)parts;
@end

