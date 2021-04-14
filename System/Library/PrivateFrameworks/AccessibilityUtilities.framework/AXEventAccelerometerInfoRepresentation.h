/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXEventRepresentationDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXEventAccelerometerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	unsigned _type;
	float _x;
	float _y;
	float _z;

}

@property (assign,nonatomic) unsigned type;                         //@synthesize type=_type - In the implementation block
@property (assign,x,nonatomic) float x;                             //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) float y;                             //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) float z;                             //@synthesize z=_z - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)setType:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)type;
-(float)x;
-(void)setX:(float)arg1 ;
-(float)y;
-(void)setY:(float)arg1 ;
-(float)z;
-(void)setZ:(float)arg1 ;
-(id)accessibilityEventRepresentationTabularDescription;
@end

