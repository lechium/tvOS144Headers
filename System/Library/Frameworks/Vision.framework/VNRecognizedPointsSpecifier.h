/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSDictionary;

@interface VNRecognizedPointsSpecifier : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding> {

	unsigned long long _requestRevision;
	NSDictionary* _allRecognizedPoints;

}

@property (nonatomic,readonly) unsigned long long requestRevision; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requestRevision;
-(id)availableKeys;
-(id)availableGroupKeys;
-(id)pointKeyGroupLabelsMapping;
-(id)populatedMLMultiArrayAndReturnError:(id*)arg1 ;
-(id)recognizedPointsForGroupKey:(id)arg1 error:(id*)arg2 ;
-(id)recognizedPointForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 allRecognizedPoints:(id)arg2 ;
@end

