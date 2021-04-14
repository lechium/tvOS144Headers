/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFType.h>

@class NSString, WFImage, NSDictionary, NSArray;

@interface WFFileType : WFType {

	NSString* _string;
	const CFStringRef _utType;
	NSString* _pboardType;
	NSString* _OSType;

}

@property (nonatomic,readonly) WFImage * documentIcon; 
@property (nonatomic,copy,readonly) NSString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) const CFStringRef utType;                     //@synthesize utType=_utType - In the implementation block
@property (getter=isDeclared,nonatomic,readonly) BOOL declared; 
@property (getter=isDynamic,nonatomic,readonly) BOOL dynamic; 
@property (nonatomic,readonly) NSString * typeDescription; 
@property (nonatomic,readonly) NSDictionary * typeDeclaration; 
@property (nonatomic,readonly) NSArray * typesConformedTo; 
@property (nonatomic,readonly) NSString * fileExtension; 
@property (nonatomic,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) NSString * pboardType;                        //@synthesize pboardType=_pboardType - In the implementation block
@property (nonatomic,readonly) NSString * OSType;                            //@synthesize OSType=_OSType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)typeWithUTType:(const CFStringRef)arg1 ;
+(id)typeFromFilename:(id)arg1 ;
+(id)typeFromMIMEType:(id)arg1 ;
+(id)typeWithString:(id)arg1 ;
+(id)typeFromFileExtension:(id)arg1 ;
+(id)typeFromPasteboardType:(id)arg1 ;
+(id)typesForTagClass:(const CFStringRef)arg1 tag:(const CFStringRef)arg2 conformingToType:(const CFStringRef)arg3 ;
+(id)typesFromUTTypes:(id)arg1 ;
+(id)cachedFileTypeForUTType:(const CFStringRef)arg1 ;
+(id)typeWithUTType:(const CFStringRef)arg1 string:(id)arg2 ;
+(id)typesFromUTTypes:(id)arg1 excludingType:(id)arg2 ;
+(id)typeForTagClass:(const CFStringRef)arg1 tag:(const CFStringRef)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(NSString *)string;
-(BOOL)isEqualToString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)MIMEType;
-(BOOL)isDynamic;
-(NSString *)fileExtension;
-(BOOL)conformsToType:(id)arg1 ;
-(NSString *)typeDescription;
-(BOOL)isDeclared;
-(BOOL)conformsToUTType:(const CFStringRef)arg1 ;
-(BOOL)conformsToUTTypes:(id)arg1 ;
-(const CFStringRef)utType;
-(WFImage *)documentIcon;
-(id)initWithUTType:(const CFStringRef)arg1 ;
-(id)initWithUTType:(const CFStringRef)arg1 string:(id)arg2 ;
-(BOOL)isEqualToType:(id)arg1 ;
-(BOOL)isEqualToUTType:(const CFStringRef)arg1 ;
-(id)conformingTypesWithFileExtension:(id)arg1 ;
-(id)conformingTypesWithMIMEType:(id)arg1 ;
-(NSDictionary *)typeDeclaration;
-(NSArray *)typesConformedTo;
-(id)preferredTagWithClass:(const CFStringRef)arg1 ;
-(id)conformingTypesWithTagClass:(const CFStringRef)arg1 tag:(id)arg2 ;
-(NSString *)pboardType;
-(NSString *)OSType;
@end
