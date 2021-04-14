/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/RBSXPCEncoding.h>
#import <libobjc.A.dylib/RBSXPCDecoding.h>
#import <libobjc.A.dylib/BSXPCEncoding.h>
#import <libobjc.A.dylib/BSXPCDecoding.h>

@class UIStoryboardDecodingContext, NSString;

@interface NSCoder : NSObject <RBSXPCEncoding, RBSXPCDecoding, BSXPCEncoding, BSXPCDecoding>

@property (nonatomic,readonly) UIStoryboardDecodingContext * _storyboardDecodingContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)CA_supportedClasses;
+(BOOL)__categorizeException:(id)arg1 intoError:(id*)arg2 ;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(CGRect)decodeCGRectForKey:(id)arg1 ;
-(void)encodeCGVector:(CGVector)arg1 forKey:(id)arg2 ;
-(CGVector)decodeCGVectorForKey:(id)arg1 ;
-(CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1 ;
-(UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1 ;
-(void)encodeCGAffineTransform:(CGAffineTransform)arg1 forKey:(id)arg2 ;
-(void)encodeUIEdgeInsets:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(NSDirectionalEdgeInsets)decodeDirectionalEdgeInsetsForKey:(id)arg1 ;
-(void)encodeDirectionalEdgeInsets:(NSDirectionalEdgeInsets)arg1 forKey:(id)arg2 ;
-(UIOffset)decodeUIOffsetForKey:(id)arg1 ;
-(void)encodeUIOffset:(UIOffset)arg1 forKey:(id)arg2 ;
-(/*^block*/id)_ui_decodeVectorForKey:(id)arg1 returnedCount:(unsigned long long*)arg2 ;
-(void)_ui_encodeVector:(const double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3 ;
-(/*^block*/id)_ui_decodeNSUIntegerVectorForKey:(id)arg1 returnedCount:(unsigned long long*)arg2 ;
-(void)_ui_encodeNSUIntegerVector:(const unsigned long long*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)_initializeClassSwapperWithCurrentDecodingViewControllerIfNeeded:(id)arg1 ;
-(id)_decodeObjectsAndTrackChildViewControllerIndexWithParent:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_ui_isInterprocess;
-(UIStoryboardDecodingContext *)_storyboardDecodingContext;
-(void)_createStoryboardDecodingContextIfNeeded;
-(id)_decodeObjectsWithSourceSegueTemplate:(id)arg1 creator:(/*^block*/id)arg2 sender:(id)arg3 forKey:(id)arg4 ;
-(id)_ui_decodeTextAttributesForKey:(id)arg1 ;
-(void)_ui_encodeTextAttributes:(id)arg1 forKey:(id)arg2 ;
-(id)CA_decodeObjectForKey:(id)arg1 ;
-(BOOL)CA_decodeCGFloatArray:(double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(BOOL)arg3 ;
-(void)CA_encodeCGFloatArray:(const double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)decodeStringForKey:(id)arg1 ;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2 ;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3 ;
-(unsigned long long)decodeUInt64ForKey:(id)arg1 ;
-(id)decodeStringForKey:(id)arg1 ;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2 ;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2 ;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(CGRect)decodeCGRectForKey:(id)arg1 ;
-(unsigned long long)decodeUInt64ForKey:(id)arg1 ;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(void)encodeCGVector:(CGVector)arg1 forKey:(id)arg2 ;
-(CGVector)decodeCGVectorForKey:(id)arg1 ;
-(id)ls_decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClass:(Class)arg2 forKey:(id)arg3 ;
-(id)ls_decodeSetWithValuesOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClasses:(id)arg2 forKey:(id)arg3 ;
-(id)ls_decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)ls_decodeArrayWithValuesOfClass:(Class)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(void)failWithError:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(id)allowedClasses;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(id)error;
-(void)encodeObject:(id)arg1 ;
-(BOOL)requiresSecureCoding;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(id)decodeObject;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 size:(unsigned long long)arg3 ;
-(id)decodePropertyListForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(int)decodeIntForKey:(id)arg1 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(void)encodeRootObject:(id)arg1 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(void)setObjectZone:(NSZone*)arg1 ;
-(NSZone*)objectZone;
-(unsigned)systemVersion;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(id)decodeDataObject;
-(void)encodeBycopyObject:(id)arg1 ;
-(id)decodeTopLevelObjectForKey:(id)arg1 error:(id*)arg2 ;
-(id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3 ;
-(id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3 ;
-(BOOL)__failWithExceptionName:(id)arg1 errorCode:(long long)arg2 format:(id)arg3 ;
-(BOOL)_validateAllowedClassesContainsClass:(Class)arg1 forKey:(id)arg2 ;
-(BOOL)validateClassSupportsSecureCoding:(Class)arg1 ;
-(void)encodeByrefObject:(id)arg1 ;
-(id)decodeTopLevelObjectAndReturnError:(id*)arg1 ;
-(BOOL)_allowsValueCoding;
-(id)decodeObjectForKey:(id)arg1 error:(id*)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeLong:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(long long)decodeLongForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)setAllowedClasses:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)decodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeDictionaryWithKeysOfClass:(Class)arg1 objectsOfClass:(Class)arg2 forKey:(id)arg3 ;
-(BOOL)validateAllowedClass:(Class)arg1 forKey:(id)arg2 ;
-(long long)decodingFailurePolicy;
-(void)__setError:(id)arg1 ;
-(void)encodePoint:(CGPoint)arg1 ;
-(CGPoint)decodePoint;
-(void)encodeSize:(CGSize)arg1 ;
-(CGSize)decodeSize;
-(void)encodeRect:(CGRect)arg1 ;
-(CGRect)decodeRect;
-(void)encodePoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodeRect:(CGRect)arg1 forKey:(id)arg2 ;
-(CGPoint)decodePointForKey:(id)arg1 ;
-(CGSize)decodeSizeForKey:(id)arg1 ;
-(CGRect)decodeRectForKey:(id)arg1 ;
@end

