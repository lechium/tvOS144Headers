/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/ONOSearching.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class ONOXMLDocument, NSString, NSDictionary, NSNumber, NSDate, NSArray;

@interface ONOXMLElement : NSObject <ONOSearching, NSCopying, NSCoding> {

	ONOXMLDocument* _document;
	NSString* _rawXMLString;
	NSString* _tag;
	unsigned long long _lineNumber;
	NSString* _namespace;
	ONOXMLElement* _parent;
	ONOXMLElement* _previousSibling;
	ONOXMLElement* _nextSibling;
	NSDictionary* _attributes;
	NSString* _stringValue;
	NSNumber* _numberValue;
	NSDate* _dateValue;
	xmlNode* _xmlNode;

}

@property (nonatomic,copy) NSString * rawXMLString;                         //@synthesize rawXMLString=_rawXMLString - In the implementation block
@property (nonatomic,copy) NSString * tag;                                  //@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic) unsigned long long lineNumber;                 //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,copy) NSString * namespace;                            //@synthesize namespace=_namespace - In the implementation block
@property (nonatomic,retain) ONOXMLElement * parent;                        //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSArray * children; 
@property (nonatomic,retain) ONOXMLElement * previousSibling;               //@synthesize previousSibling=_previousSibling - In the implementation block
@property (nonatomic,retain) ONOXMLElement * nextSibling;                   //@synthesize nextSibling=_nextSibling - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                          //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy) NSNumber * numberValue;                          //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,copy) NSDate * dateValue;                              //@synthesize dateValue=_dateValue - In the implementation block
@property (assign,nonatomic) xmlNode* xmlNode;                              //@synthesize xmlNode=_xmlNode - In the implementation block
@property (assign,nonatomic,__weak) ONOXMLDocument * document;              //@synthesize document=_document - In the implementation block
@property (getter=isBlank,nonatomic,readonly) BOOL blank; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSArray *)children;
-(NSDictionary *)attributes;
-(id)valueForAttribute:(id)arg1 ;
-(unsigned long long)lineNumber;
-(ONOXMLElement *)parent;
-(NSString *)tag;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setLineNumber:(unsigned long long)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSDate *)dateValue;
-(void)setDateValue:(NSDate *)arg1 ;
-(void)setTag:(NSString *)arg1 ;
-(ONOXMLElement *)nextSibling;
-(void)setParent:(ONOXMLElement *)arg1 ;
-(ONOXMLDocument *)document;
-(ONOXMLElement *)previousSibling;
-(NSNumber *)numberValue;
-(void)setDocument:(ONOXMLDocument *)arg1 ;
-(BOOL)isBlank;
-(void)setNumberValue:(NSNumber *)arg1 ;
-(NSString *)namespace;
-(void)setNamespace:(NSString *)arg1 ;
-(void)setXmlNode:(xmlNode*)arg1 ;
-(xmlNode*)xmlNode;
-(id)XPath:(id)arg1 ;
-(id)functionResultByEvaluatingXPath:(id)arg1 ;
-(void)enumerateElementsWithXPath:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateElementsWithXPath:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstChildWithXPath:(id)arg1 ;
-(id)CSS:(id)arg1 ;
-(void)enumerateElementsWithCSS:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateElementsWithCSS:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstChildWithCSS:(id)arg1 ;
-(id)valueForAttribute:(id)arg1 inNamespace:(id)arg2 ;
-(id)firstChildWithTag:(id)arg1 ;
-(id)firstChildWithTag:(id)arg1 inNamespace:(id)arg2 ;
-(id)childrenWithTag:(id)arg1 ;
-(id)childrenWithTag:(id)arg1 inNamespace:(id)arg2 ;
-(id)childrenAtIndexes:(id)arg1 ;
-(id)indexesOfChildrenPassingTest:(/*^block*/id)arg1 ;
-(xmlXPathObject*)xmlXPathObjectPtrWithXPath:(id)arg1 ;
-(NSString *)rawXMLString;
-(void)setRawXMLString:(NSString *)arg1 ;
-(void)setPreviousSibling:(ONOXMLElement *)arg1 ;
-(void)setNextSibling:(ONOXMLElement *)arg1 ;
@end

