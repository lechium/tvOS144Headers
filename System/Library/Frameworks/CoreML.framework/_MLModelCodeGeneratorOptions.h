/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreML/CoreML-Structs.h>
@interface _MLModelCodeGeneratorOptions : NSObject {

	SwiftCodeGeneratorOptions _cValue;

}

@property (assign,nonatomic) BOOL documentation; 
@property (assign,nonatomic) BOOL globalModule; 
@property (assign,nonatomic) BOOL publicAccess; 
@property (assign,nonatomic) long long container; 
@property (readonly) SwiftCodeGeneratorOptions cValue;              //@synthesize cValue=_cValue - In the implementation block
+(id)options;
-(long long)container;
-(void)setContainer:(long long)arg1 ;
-(BOOL)documentation;
-(void)setDocumentation:(BOOL)arg1 ;
-(BOOL)globalModule;
-(void)setGlobalModule:(BOOL)arg1 ;
-(BOOL)publicAccess;
-(void)setPublicAccess:(BOOL)arg1 ;
-(SwiftCodeGeneratorOptions)cValue;
@end

